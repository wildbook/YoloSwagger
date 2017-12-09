#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGamePlayer_t {
    bool isReportingDisabled;
    uint64_t gameId;
    std::string skinName;
    uint64_t userId;
    int32_t wins;
    int32_t losses;
    std::string summonerName;
    int32_t spell1Id;
    int32_t teamId;
    int32_t championId;
    int32_t profileIconId;
    nlohmann::json stats;
    int32_t leaves;
    uint64_t summonerId;
    int32_t spell2Id;
    std::vector<int32_t> items;
    int32_t eloChange;
    bool botPlayer;
    int32_t skinIndex;
    bool leaver;
    int32_t elo;
    int32_t level;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGamePlayer_t& v) {
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["gameId"] = v.gameId;
    j["skinName"] = v.skinName;
    j["userId"] = v.userId;
    j["wins"] = v.wins;
    j["losses"] = v.losses;
    j["summonerName"] = v.summonerName;
    j["spell1Id"] = v.spell1Id;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
    j["profileIconId"] = v.profileIconId;
    j["stats"] = v.stats;
    j["leaves"] = v.leaves;
    j["summonerId"] = v.summonerId;
    j["spell2Id"] = v.spell2Id;
    j["items"] = v.items;
    j["eloChange"] = v.eloChange;
    j["botPlayer"] = v.botPlayer;
    j["skinIndex"] = v.skinIndex;
    j["leaver"] = v.leaver;
    j["elo"] = v.elo;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGamePlayer_t& v) {
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.userId = j.at("userId").get<uint64_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
    v.elo = j.at("elo").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
