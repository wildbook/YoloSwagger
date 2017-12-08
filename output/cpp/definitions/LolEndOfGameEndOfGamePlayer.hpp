#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer_t {
    int32_t spell1Id;
    std::string skinName;
    bool isReportingDisabled;
    int32_t eloChange;
    int32_t championId;
    bool botPlayer;
    int32_t level;
    std::vector<int32_t> items;
    uint64_t gameId;
    int32_t skinIndex;
    int32_t teamId;
    int32_t losses;
    int32_t spell2Id;
    int32_t profileIconId;
    nlohmann::json stats;
    uint64_t summonerId;
    int32_t wins;
    uint64_t userId;
    int32_t elo;
    int32_t leaves;
    std::string summonerName;
    bool leaver;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayer_t& v) {
    j["spell1Id"] = v.spell1Id;
    j["skinName"] = v.skinName;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["eloChange"] = v.eloChange;
    j["championId"] = v.championId;
    j["botPlayer"] = v.botPlayer;
    j["level"] = v.level;
    j["items"] = v.items;
    j["gameId"] = v.gameId;
    j["skinIndex"] = v.skinIndex;
    j["teamId"] = v.teamId;
    j["losses"] = v.losses;
    j["spell2Id"] = v.spell2Id;
    j["profileIconId"] = v.profileIconId;
    j["stats"] = v.stats;
    j["summonerId"] = v.summonerId;
    j["wins"] = v.wins;
    j["userId"] = v.userId;
    j["elo"] = v.elo;
    j["leaves"] = v.leaves;
    j["summonerName"] = v.summonerName;
    j["leaver"] = v.leaver;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayer_t& v) {
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.level = j.at("level").get<int32_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.leaver = j.at("leaver").get<bool>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
