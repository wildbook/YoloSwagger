#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRuneQuantity.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantities_t {
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsRuneQuantity_t> runeQuantities;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRuneQuantities_t& v) {
    j["summonerId"] = v.summonerId;
    j["runeQuantities"] = v.runeQuantities;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRuneQuantities_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.runeQuantities = j.at("runeQuantities").get<std::vector<LolCollectionsCollectionsRuneQuantity_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRuneQuantities_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
