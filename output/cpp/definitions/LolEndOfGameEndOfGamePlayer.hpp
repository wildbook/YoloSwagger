#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer_t {
    int32_t profileIconId;
    bool botPlayer;
    bool leaver;
    uint64_t summonerId;
    int32_t skinIndex;
    int32_t spell2Id;
    int32_t spell1Id;
    uint64_t userId;
    int32_t elo;
    int32_t leaves;
    int32_t level;
    bool isReportingDisabled;
    std::vector<int32_t> items;
    int32_t championId;
    uint64_t gameId;
    std::string summonerName;
    int32_t wins;
    std::string skinName;
    int32_t teamId;
    int32_t eloChange;
    nlohmann::json stats;
    int32_t losses;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayer_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["botPlayer"] = v.botPlayer;
    j["leaver"] = v.leaver;
    j["summonerId"] = v.summonerId;
    j["skinIndex"] = v.skinIndex;
    j["spell2Id"] = v.spell2Id;
    j["spell1Id"] = v.spell1Id;
    j["userId"] = v.userId;
    j["elo"] = v.elo;
    j["leaves"] = v.leaves;
    j["level"] = v.level;
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["items"] = v.items;
    j["championId"] = v.championId;
    j["gameId"] = v.gameId;
    j["summonerName"] = v.summonerName;
    j["wins"] = v.wins;
    j["skinName"] = v.skinName;
    j["teamId"] = v.teamId;
    j["eloChange"] = v.eloChange;
    j["stats"] = v.stats;
    j["losses"] = v.losses;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayer_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.leaver = j.at("leaver").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.championId = j.at("championId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.wins = j.at("wins").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.losses = j.at("losses").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
