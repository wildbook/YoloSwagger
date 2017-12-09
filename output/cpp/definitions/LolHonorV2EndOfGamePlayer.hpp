#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    int32_t profileIconId;
    bool botPlayer;
    bool leaver;
    uint64_t gameId;
    uint64_t summonerId;
    int32_t skinIndex;
    int32_t wins;
    std::string skinName;
    uint64_t userId;
    std::string summonerName;
    int32_t teamId;
    int32_t championId;
    nlohmann::json stats;
    bool isReportingDisabled;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["botPlayer"] = v.botPlayer;
    j["leaver"] = v.leaver;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["skinIndex"] = v.skinIndex;
    j["wins"] = v.wins;
    j["skinName"] = v.skinName;
    j["userId"] = v.userId;
    j["summonerName"] = v.summonerName;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
    j["stats"] = v.stats;
    j["isReportingDisabled"] = v.isReportingDisabled;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.leaver = j.at("leaver").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.userId = j.at("userId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
  }
  inline std::string to_string(const LolHonorV2EndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
