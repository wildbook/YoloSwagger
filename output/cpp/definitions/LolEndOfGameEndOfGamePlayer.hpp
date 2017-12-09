#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer_t {
    int32_t eloChange;
    int32_t elo;
    int32_t profileIconId;
    uint64_t gameId;
    uint64_t userId;
    int32_t leaves;
    bool botPlayer;
    int32_t wins;
    nlohmann::json stats;
    bool leaver;
    int32_t teamId;
    uint64_t summonerId;
    std::vector<int32_t> items;
    std::string summonerName;
    bool isReportingDisabled;
    int32_t spell2Id;
    int32_t spell1Id;
    int32_t skinIndex;
    int32_t losses;
    int32_t level;
    std::string skinName;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayer_t& v) {
    j["eloChange"] = v.eloChange;
    j["elo"] = v.elo;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["userId"] = v.userId;
    j["leaves"] = v.leaves;
    j["botPlayer"] = v.botPlayer;
    j["wins"] = v.wins;
    j["stats"] = v.stats;
    j["leaver"] = v.leaver;
    j["teamId"] = v.teamId;
    j["summonerId"] = v.summonerId;
    j["items"] = v.items;
    j["summonerName"] = v.summonerName;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["spell2Id"] = v.spell2Id;
    j["spell1Id"] = v.spell1Id;
    j["skinIndex"] = v.skinIndex;
    j["losses"] = v.losses;
    j["level"] = v.level;
    j["skinName"] = v.skinName;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayer_t& v) {
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.wins = j.at("wins").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.leaver = j.at("leaver").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
