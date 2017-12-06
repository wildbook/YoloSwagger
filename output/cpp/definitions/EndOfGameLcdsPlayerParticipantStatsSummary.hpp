#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace leagueapi {
  struct EndOfGameLcdsPlayerParticipantStatsSummary_t {
    int32_t championId;
    int32_t elo;
    int32_t wins;
    int32_t profileIconId;
    std::string skinName;
    bool leaver;
    uint64_t gameId;
    int32_t spell1Id;
    int32_t skinIndex;
    bool botPlayer;
    int32_t teamId;
    int32_t spell2Id;
    std::vector<EndOfGameLcdsRawStatDTO_t> statistics;
    int32_t losses;
    int32_t eloChange;
    int32_t leaves;
    std::string summonerName;
    int32_t level;
    uint64_t userId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    j["championId"] = v.championId;
    j["elo"] = v.elo;
    j["wins"] = v.wins;
    j["profileIconId"] = v.profileIconId;
    j["skinName"] = v.skinName;
    j["leaver"] = v.leaver;
    j["gameId"] = v.gameId;
    j["spell1Id"] = v.spell1Id;
    j["skinIndex"] = v.skinIndex;
    j["botPlayer"] = v.botPlayer;
    j["teamId"] = v.teamId;
    j["spell2Id"] = v.spell2Id;
    j["statistics"] = v.statistics;
    j["losses"] = v.losses;
    j["eloChange"] = v.eloChange;
    j["leaves"] = v.leaves;
    j["summonerName"] = v.summonerName;
    j["level"] = v.level;
    j["userId"] = v.userId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.elo = j.at("elo").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.leaver = j.at("leaver").get<bool>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.teamId = j.at("teamId").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO_t>>();
    v.losses = j.at("losses").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.level = j.at("level").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
  }
}
