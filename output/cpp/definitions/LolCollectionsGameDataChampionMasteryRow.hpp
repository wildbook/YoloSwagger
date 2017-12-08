#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryRow_t {
    std::vector<uint32_t> masteries;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsGameDataChampionMasteryRow_t& v) {
    j["masteries"] = v.masteries;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsGameDataChampionMasteryRow_t& v) {
    v.masteries = j.at("masteries").get<std::vector<uint32_t>>();
  }
  inline std::string to_string(const LolCollectionsGameDataChampionMasteryRow_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
