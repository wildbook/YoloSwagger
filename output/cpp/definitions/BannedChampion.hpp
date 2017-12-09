#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BannedChampion_t {
    int32_t pickTurn;
    int32_t teamId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const BannedChampion_t& v) {
    j["pickTurn"] = v.pickTurn;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, BannedChampion_t& v) {
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const BannedChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
