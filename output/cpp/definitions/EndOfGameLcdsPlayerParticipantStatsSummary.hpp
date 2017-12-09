#pragma once
#include <json.hpp>
#include <optional>
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace leagueapi {
  struct EndOfGameLcdsPlayerParticipantStatsSummary_t {
    int32_t profileIconId;
    bool botPlayer;
    int32_t championId;
    int32_t level;
    uint64_t gameId;
    std::string summonerName;
    int32_t skinIndex;
    int32_t wins;
    std::string skinName;
    int32_t spell1Id;
    int32_t spell2Id;
    uint64_t userId;
    std::vector<EndOfGameLcdsRawStatDTO_t> statistics;
    int32_t elo;
    int32_t leaves;
    int32_t eloChange;
    bool leaver;
    int32_t losses;
    int32_t teamId;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["botPlayer"] = v.botPlayer;
    j["championId"] = v.championId;
    j["level"] = v.level;
    j["gameId"] = v.gameId;
    j["summonerName"] = v.summonerName;
    j["skinIndex"] = v.skinIndex;
    j["wins"] = v.wins;
    j["skinName"] = v.skinName;
    j["spell1Id"] = v.spell1Id;
    j["spell2Id"] = v.spell2Id;
    j["userId"] = v.userId;
    j["statistics"] = v.statistics;
    j["elo"] = v.elo;
    j["leaves"] = v.leaves;
    j["eloChange"] = v.eloChange;
    j["leaver"] = v.leaver;
    j["losses"] = v.losses;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.botPlayer = j.at("botPlayer").get<bool>();
    v.championId = j.at("championId").get<int32_t>();
    v.level = j.at("level").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.skinName = j.at("skinName").get<std::string>();
    v.spell1Id = j.at("spell1Id").get<int32_t>();
    v.spell2Id = j.at("spell2Id").get<int32_t>();
    v.userId = j.at("userId").get<uint64_t>();
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO_t>>();
    v.elo = j.at("elo").get<int32_t>();
    v.leaves = j.at("leaves").get<int32_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.leaver = j.at("leaver").get<bool>();
    v.losses = j.at("losses").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
  }
  inline std::string to_string(const EndOfGameLcdsPlayerParticipantStatsSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
