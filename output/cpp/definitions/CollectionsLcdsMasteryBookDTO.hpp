#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsMasteryBookPageDTO.hpp"
namespace leagueapi {
  struct CollectionsLcdsMasteryBookDTO_t {
    std::vector<CollectionsLcdsMasteryBookPageDTO_t> bookPages;
    std::string_t dateString;
    uint64_t_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsMasteryBookDTO_t& v) {
    j["bookPages"] = v.bookPages;
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsMasteryBookDTO_t& v) {
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsMasteryBookPageDTO_t>>();
    v.dateString = j.at("dateString").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
  }
  inline std::string to_string(const CollectionsLcdsMasteryBookDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
