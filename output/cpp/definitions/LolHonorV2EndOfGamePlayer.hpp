#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2EndOfGamePlayer_t {
    bool botPlayer;
    int32_t profileIconId;
    uint64_t gameId;
    int32_t championId;
    std::string summonerName;
    bool isReportingDisabled;
    uint64_t userId;
    bool leaver;
    int32_t skinIndex;
    std::string skinName;
    int32_t teamId;
    int32_t wins;
    nlohmann::json stats;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGamePlayer_t& v) {
    j["botPlayer"] = v.botPlayer;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["userId"] = v.userId;
    j["leaver"] = v.leaver;
    j["skinIndex"] = v.skinIndex;
    j["skinName"] = v.skinName;
    j["teamId"] = v.teamId;
    j["wins"] = v.wins;
    j["stats"] = v.stats;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGamePlayer_t& v) {
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.userId = j.at("userId").get<uint64_t>();
    v.leaver = j.at("leaver").get<bool>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolHonorV2EndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
