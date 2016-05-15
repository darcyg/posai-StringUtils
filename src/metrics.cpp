//
// Created by levin on 12/5/15.
//

#include "metrics.h"

namespace str {

std::size_t hamming_distance(string const& a, string const& b) throw(std::length_error)
{
    if (a.length() != b.length())
        throw std::length_error("Hamming distance undefined for strings of non-equal length.");

    std::size_t ret = 0;

    for (auto i = 0; i < a.length(); ++i)
    {
        if (a[i] != b[i])
            ++ret;
    }

    return ret;
}

std::size_t editing_distance(string const& a, string const& b)
{
    if (a == b) return 0;

    auto m = a.length();
    auto n = b.length();

    size_t d[m][n];

    for (size_t i = 0; i < n; ++i)
        d[0][i] = i;

    for (size_t i = 0; i < m; ++i)
        d[i][0] = i;

    for (size_t i = 1; i < m; ++i)
    {
        for (size_t j = 1; j < n; ++j)
        {
            d[i][j] = d[i-1][j] + 1;

            if (d[i][j-1] + 1 < d[i][j])
                d[i][j] = d[i][j-1] + 1;

            size_t k = (a[i] == b[j]) ? 0 : 1;

            if (d[i-1][j-1] + k < d[i][j])
                d[i][j] = d[i-1][j-1] + k;
        }
    }

    return d[m-1][n-1];
}

}