#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashKdaClassification.hpp"
namespace leagueapi {
  struct LolClashRankedScoutingTopChampion_t {
    int32_t_t championId;
    int32_t_t gameCount;
    std::string_t kda;
    int32_t_t rank;
    int32_t_t winRate;
    LolClashKdaClassification_t kdaClassification;
    int32_t_t winCount;
  };

  inline void to_json(nlohmann::json& j, const LolClashRankedScoutingTopChampion_t& v) {
    j["championId"] = v.championId;
    j["gameCount"] = v.gameCount;
    j["kda"] = v.kda;
    j["rank"] = v.rank;
    j["winRate"] = v.winRate;
    j["kdaClassification"] = v.kdaClassification;
    j["winCount"] = v.winCount;
  }

  inline void from_json(const nlohmann::json& j, LolClashRankedScoutingTopChampion_t& v) {
    v.championId = j.at("championId").get<int32_t_t>();
    v.gameCount = j.at("gameCount").get<int32_t_t>();
    v.kda = j.at("kda").get<std::string_t>();
    v.rank = j.at("rank").get<int32_t_t>();
    v.winRate = j.at("winRate").get<int32_t_t>();
    v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification_t>();
    v.winCount = j.at("winCount").get<int32_t_t>();
  }
  inline std::string to_string(const LolClashRankedScoutingTopChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
