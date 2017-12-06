#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer_t {
    int32_t level;
    int32_t skinIndex;
    int32_t profileIconId;
    nlohmann::json stats;
    uint64_t userId;
    uint64_t summonerId;
    int32_t championId;
    int32_t elo;
    int32_t wins;
    std::vector<int32_t> items;
    bool leaver;
    uint64_t gameId;
    int32_t spell1Id;
    bool botPlayer;
    int32_t teamId;
    int32_t spell2Id;
    bool isReportingDisabled;
    int32_t losses;
    int32_t eloChange;
    int32_t leaves;
    std::string summonerName;
    std::string skinName;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayer_t& v) {
    j["level"] = v.level;
    j["skinIndex"] = v.skinIndex;
    j["profileIconId"] = v.profileIconId;
    j["stats"] = v.stats;
    j["userId"] = v.userId;
    j["summonerId"] = v.summonerId;
    j["championId"] = v.championId;
    j["elo"] = v.elo;
    j["wins"] = v.wins;
    j["items"] = v.items;
    j["leaver"] = v.leaver;
    j["gameId"] = v.gameId;
    j["spell1Id"] = v.spell1Id;
    j["botPlayer"] = v.botPlayer;
    j["teamId"] = v.teamId;
    j["spell2Id"] = v.spell2Id;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["losses"] = v.losses;
    j["eloChange"] = v.eloChange;
    j["leaves"] = v.leaves;
    j["summonerName"] = v.summonerName;
    j["skinName"] = v.skinName;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayer_t& v) {
    v.level = j.at("level").get<int32_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.userId = j.at("userId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.leaver = j.at("leaver").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.losses = j.at("losses").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinName = j.at("skinName").get<std::string>();
  }
}
