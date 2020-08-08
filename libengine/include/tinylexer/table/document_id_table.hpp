//
// Created by KHML on 2020/07/11.
//

#ifndef TINYLEXER_DOCUMENT_ID_TABLE_HPP
#define TINYLEXER_DOCUMENT_ID_TABLE_HPP

#include <string>
#include <unordered_map>
#include <unordered_set>

#include <tinylexer/table/word_id_table.hpp>

namespace tinylex
{
    class DocumentIdTable
    {
    public:
        DocumentIdTable();

        virtual ~DocumentIdTable();

        void setIds(const std::string& filepath);

        std::vector<std::string> lookupFiles(const std::string& word);

        void dump(const std::string& filepath) const;

    private:
        WordIdTable wordTable;
        WordIdTable docTable;
        std::unordered_map<size_t, std::unordered_set<size_t>> relationTable; // wordId -> [docId, docId, ...]
    };
}

#endif //TINYLEXER_DOCUMENT_ID_TABLE_HPP
