#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsMasteryBookPageDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookDTO_t {
    uint64_t summonerId;
    std::string dateString;
    std::vector<CollectionsLcdsMasteryBookPageDTO_t> bookPages;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookDTO_t& v) {
    j["summonerId"] = v.summonerId;
    j["dateString"] = v.dateString;
    j["bookPages"] = v.bookPages;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookDTO_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.dateString = j.at("dateString").get<std::string>();
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsMasteryBookPageDTO_t>>();
  }
}
