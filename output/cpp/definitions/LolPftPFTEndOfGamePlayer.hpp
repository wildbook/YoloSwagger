#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEndOfGamePlayer_t {
    int32_t championId;
    int32_t elo;
    int32_t wins;
    uint64_t summonerId;
    int32_t profileIconId;
    std::vector<int32_t> items;
    bool leaver;
    uint64_t gameId;
    int32_t spell1Id;
    uint64_t userId;
    bool botPlayer;
    std::string skinName;
    int32_t spell2Id;
    bool isReportingDisabled;
    int32_t teamId;
    int32_t losses;
    int32_t eloChange;
    int32_t leaves;
    nlohmann::json stats;
    std::string summonerName;
    int32_t level;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGamePlayer_t& v) {
    j["championId"] = v.championId;
    j["elo"] = v.elo;
    j["wins"] = v.wins;
    j["summonerId"] = v.summonerId;
    j["profileIconId"] = v.profileIconId;
    j["items"] = v.items;
    j["leaver"] = v.leaver;
    j["gameId"] = v.gameId;
    j["spell1Id"] = v.spell1Id;
    j["userId"] = v.userId;
    j["botPlayer"] = v.botPlayer;
    j["skinName"] = v.skinName;
    j["spell2Id"] = v.spell2Id;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["teamId"] = v.teamId;
    j["losses"] = v.losses;
    j["eloChange"] = v.eloChange;
    j["leaves"] = v.leaves;
    j["stats"] = v.stats;
    j["summonerName"] = v.summonerName;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGamePlayer_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.leaver = j.at("leaver").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.skinName = j.at("skinName").get<std::string>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.level = j.at("level").get<int32_t>();
  }
}
