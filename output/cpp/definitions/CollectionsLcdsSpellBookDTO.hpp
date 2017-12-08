#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSpellBookPageDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsSpellBookDTO_t {
    std::vector<CollectionsLcdsSpellBookPageDTO_t> bookPages;
    std::string_t dateString;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSpellBookDTO_t& v) {
    j["bookPages"] = v.bookPages;
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSpellBookDTO_t& v) {
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsSpellBookPageDTO_t>>();
    v.dateString = j.at("dateString").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsSpellBookDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
