#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRuneQuantity.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantities_t {
    std::vector<LolCollectionsCollectionsRuneQuantity_t> runeQuantities;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneQuantities_t& v) {
    j["runeQuantities"] = v.runeQuantities;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneQuantities_t& v) {
    v.runeQuantities = j.at("runeQuantities").get<std::vector<LolCollectionsCollectionsRuneQuantity_t>>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
