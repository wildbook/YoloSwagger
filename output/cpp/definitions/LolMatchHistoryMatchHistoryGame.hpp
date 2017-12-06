#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryTeam.hpp"
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame_t {
    std::string gameType;
    std::vector<LolMatchHistoryMatchHistoryParticipant_t> participants;
    int32_t queueId;
    uint32_t gameDuration;
    uint16_t seasonId;
    std::string gameMode;
    uint64_t gameId;
    std::string platformId;
    uint16_t mapId;
    std::string gameVersion;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t> participantIdentities;
    uint64_t gameCreation;
    std::string gameCreationDate;
    std::vector<LolMatchHistoryMatchHistoryTeam_t> teams;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGame_t& v) {
    j["gameType"] = v.gameType;
    j["participants"] = v.participants;
    j["queueId"] = v.queueId;
    j["gameDuration"] = v.gameDuration;
    j["seasonId"] = v.seasonId;
    j["gameMode"] = v.gameMode;
    j["gameId"] = v.gameId;
    j["platformId"] = v.platformId;
    j["mapId"] = v.mapId;
    j["gameVersion"] = v.gameVersion;
    j["participantIdentities"] = v.participantIdentities;
    j["gameCreation"] = v.gameCreation;
    j["gameCreationDate"] = v.gameCreationDate;
    j["teams"] = v.teams;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGame_t& v) {
    v.gameType = j.at("gameType").get<std::string>();
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameDuration = j.at("gameDuration").get<uint32_t>();
    v.seasonId = j.at("seasonId").get<uint16_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.platformId = j.at("platformId").get<std::string>();
    v.mapId = j.at("mapId").get<uint16_t>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t>>();
    v.gameCreation = j.at("gameCreation").get<uint64_t>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam_t>>();
  }
}
