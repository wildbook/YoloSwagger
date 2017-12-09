#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsMasteryBookPageDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookDTO_t {
    std::string dateString;
    std::vector<CollectionsLcdsMasteryBookPageDTO_t> bookPages;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookDTO_t& v) {
    j["dateString"] = v.dateString;
    j["bookPages"] = v.bookPages;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookDTO_t& v) {
    v.dateString = j.at("dateString").get<std::string>();
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsMasteryBookPageDTO_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const CollectionsLcdsMasteryBookDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
