#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    int32_t teamId;
    uint64_t summonerId;
    std::string summonerName;
    int32_t profileIconId;
    uint64_t gameId;
    uint64_t userId;
    int32_t skinIndex;
    int32_t championId;
    bool botPlayer;
    bool leaver;
    int32_t wins;
    std::string skinName;
    nlohmann::json stats;
    bool isReportingDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["teamId"] = v.teamId;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["userId"] = v.userId;
    j["skinIndex"] = v.skinIndex;
    j["championId"] = v.championId;
    j["botPlayer"] = v.botPlayer;
    j["leaver"] = v.leaver;
    j["wins"] = v.wins;
    j["skinName"] = v.skinName;
    j["stats"] = v.stats;
    j["isReportingDisabled"] = v.isReportingDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.teamId = j.at("teamId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.leaver = j.at("leaver").get<bool>();
    v.wins = j.at("wins").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
  }
  inline std::string to_string(const LolHonorV2EndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
