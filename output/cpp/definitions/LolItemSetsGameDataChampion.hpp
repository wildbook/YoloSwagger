#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolItemSetsGameDataChampion_t {
    std::string alias;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsGameDataChampion_t& v) {
    j["alias"] = v.alias;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsGameDataChampion_t& v) {
    v.alias = j.at("alias").get<std::string>();
  }
}
