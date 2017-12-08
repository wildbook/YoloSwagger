#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
#include "LolMatchHistoryMatchHistoryTeam.hpp"
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame_t {
    uint16_t seasonId;
    std::string gameVersion;
    uint64_t gameId;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t> participantIdentities;
    int32_t queueId;
    std::string platformId;
    std::string gameMode;
    uint16_t mapId;
    std::string gameType;
    std::string gameCreationDate;
    std::vector<LolMatchHistoryMatchHistoryParticipant_t> participants;
    uint32_t gameDuration;
    std::vector<LolMatchHistoryMatchHistoryTeam_t> teams;
    uint64_t gameCreation;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGame_t& v) {
    j["seasonId"] = v.seasonId;
    j["gameVersion"] = v.gameVersion;
    j["gameId"] = v.gameId;
    j["participantIdentities"] = v.participantIdentities;
    j["queueId"] = v.queueId;
    j["platformId"] = v.platformId;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["gameType"] = v.gameType;
    j["gameCreationDate"] = v.gameCreationDate;
    j["participants"] = v.participants;
    j["gameDuration"] = v.gameDuration;
    j["teams"] = v.teams;
    j["gameCreation"] = v.gameCreation;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGame_t& v) {
    v.seasonId = j.at("seasonId").get<uint16_t>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.mapId = j.at("mapId").get<uint16_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant_t>>();
    v.gameDuration = j.at("gameDuration").get<uint32_t>();
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam_t>>();
    v.gameCreation = j.at("gameCreation").get<uint64_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
