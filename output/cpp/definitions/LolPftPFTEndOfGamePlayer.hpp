#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTEndOfGamePlayer_t {
    bool isReportingDisabled;
    std::vector<int32_t> items;
    uint64_t gameId;
    nlohmann::json stats;
    std::string skinName;
    int32_t leaves;
    uint64_t userId;
    int32_t spell2Id;
    int32_t elo;
    int32_t eloChange;
    bool botPlayer;
    int32_t losses;
    int32_t profileIconId;
    std::string summonerName;
    int32_t spell1Id;
    int32_t wins;
    bool leaver;
    uint64_t summonerId;
    int32_t level;
    int32_t teamId;
    int32_t championId;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTEndOfGamePlayer_t& v) {
    j["isReportingDisabled"] = v.isReportingDisabled;
    j["items"] = v.items;
    j["gameId"] = v.gameId;
    j["stats"] = v.stats;
    j["skinName"] = v.skinName;
    j["leaves"] = v.leaves;
    j["userId"] = v.userId;
    j["spell2Id"] = v.spell2Id;
    j["elo"] = v.elo;
    j["eloChange"] = v.eloChange;
    j["botPlayer"] = v.botPlayer;
    j["losses"] = v.losses;
    j["profileIconId"] = v.profileIconId;
    j["summonerName"] = v.summonerName;
    j["spell1Id"] = v.spell1Id;
    j["wins"] = v.wins;
    j["leaver"] = v.leaver;
    j["summonerId"] = v.summonerId;
    j["level"] = v.level;
    j["teamId"] = v.teamId;
    j["championId"] = v.championId;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTEndOfGamePlayer_t& v) {
    v.isReportingDisabled = j.at("isReportingDisabled").get<bool>();
    v.items = j.at("items").get<std::vector<int32_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.stats = j.at("stats").get<nlohmann::json>();
    v.skinName = j.at("skinName").get<std::string>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.losses = j.at("losses").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.level = j.at("level").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
  }
  inline std::string to_string(const LolPftPFTEndOfGamePlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
