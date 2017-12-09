#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashKdaClassification.hpp"
namespace leagueapi {
  struct LolClashRankedScoutingTopChampion_t {
    int32_t winRate;
    int32_t gameCount;
    LolClashKdaClassification_t kdaClassification;
    int32_t winCount;
    std::string kda;
    int32_t rank;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRankedScoutingTopChampion_t& v) {
    j["winRate"] = v.winRate;
    j["gameCount"] = v.gameCount;
    j["kdaClassification"] = v.kdaClassification;
    j["winCount"] = v.winCount;
    j["kda"] = v.kda;
    j["rank"] = v.rank;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRankedScoutingTopChampion_t& v) {
    v.winRate = j.at("winRate").get<int32_t>();
    v.gameCount = j.at("gameCount").get<int32_t>();
    v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification_t>();
    v.winCount = j.at("winCount").get<int32_t>();
    v.kda = j.at("kda").get<std::string>();
    v.rank = j.at("rank").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolClashRankedScoutingTopChampion_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
