#ifndef SWAGGER_TYPES_EndOfGameLcdsPlayerParticipantStatsSummary_HPP
#define SWAGGER_TYPES_EndOfGameLcdsPlayerParticipantStatsSummary_HPP
#include <json.hpp>
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace leagueapi {
  // 
  struct EndOfGameLcdsPlayerParticipantStatsSummary {
    // 
    bool botPlayer;
    // 
    int32_t profileIconId;
    // 
    uint64_t gameId;
    // 
    int32_t championId;
    // 
    int32_t elo;
    // 
    int32_t level;
    // 
    uint64_t userId;
    // 
    int32_t leaves;
    // 
    bool leaver;
    // 
    int32_t skinIndex;
    // 
    std::string skinName;
    // 
    int32_t spell2Id;
    // 
    int32_t wins;
    // 
    int32_t teamId;
    // 
    std::vector<EndOfGameLcdsRawStatDTO> statistics;
    // 
    int32_t losses;
    // 
    int32_t spell1Id;
    // 
    int32_t eloChange;
    // 
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    j["botPlayer"] = v.botPlayer;
    j["profileIconId"] = v.profileIconId;
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["elo"] = v.elo;
    j["level"] = v.level;
    j["userId"] = v.userId;
    j["leaves"] = v.leaves;
    j["leaver"] = v.leaver;
    j["skinIndex"] = v.skinIndex;
    j["skinName"] = v.skinName;
    j["spell2Id"] = v.spell2Id;
    j["wins"] = v.wins;
    j["teamId"] = v.teamId;
    j["statistics"] = v.statistics;
    j["losses"] = v.losses;
    j["spell1Id"] = v.spell1Id;
    j["eloChange"] = v.eloChange;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    v.botPlayer = j.at("botPlayer").get<bool>;
    v.profileIconId = j.at("profileIconId").get<int32_t>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.championId = j.at("championId").get<int32_t>;
    v.elo = j.at("elo").get<int32_t>;
    v.level = j.at("level").get<int32_t>;
    v.userId = j.at("userId").get<uint64_t>;
    v.leaves = j.at("leaves").get<int32_t>;
    v.leaver = j.at("leaver").get<bool>;
    v.skinIndex = j.at("skinIndex").get<int32_t>;
    v.skinName = j.at("skinName").get<std::string>;
    v.spell2Id = j.at("spell2Id").get<int32_t>;
    v.wins = j.at("wins").get<int32_t>;
    v.teamId = j.at("teamId").get<int32_t>;
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO>>;
    v.losses = j.at("losses").get<int32_t>;
    v.spell1Id = j.at("spell1Id").get<int32_t>;
    v.eloChange = j.at("eloChange").get<int32_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EndOfGameLcdsPlayerParticipantStatsSummary_HPP
