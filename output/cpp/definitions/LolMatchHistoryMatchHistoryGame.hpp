#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
#include "LolMatchHistoryMatchHistoryTeam.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame_t {
    uint32_t gameDuration;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t> participantIdentities;
    uint64_t gameId;
    uint16_t mapId;
    std::vector<LolMatchHistoryMatchHistoryTeam_t> teams;
    std::string gameType;
    std::string gameVersion;
    std::string platformId;
    std::string gameMode;
    uint64_t gameCreation;
    std::string gameCreationDate;
    int32_t queueId;
    std::vector<LolMatchHistoryMatchHistoryParticipant_t> participants;
    uint16_t seasonId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryGame_t& v) {
    j["gameDuration"] = v.gameDuration;
    j["participantIdentities"] = v.participantIdentities;
    j["gameId"] = v.gameId;
    j["mapId"] = v.mapId;
    j["teams"] = v.teams;
    j["gameType"] = v.gameType;
    j["gameVersion"] = v.gameVersion;
    j["platformId"] = v.platformId;
    j["gameMode"] = v.gameMode;
    j["gameCreation"] = v.gameCreation;
    j["gameCreationDate"] = v.gameCreationDate;
    j["queueId"] = v.queueId;
    j["participants"] = v.participants;
    j["seasonId"] = v.seasonId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryGame_t& v) {
    v.gameDuration = j.at("gameDuration").get<uint32_t>();
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.mapId = j.at("mapId").get<uint16_t>();
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam_t>>();
    v.gameType = j.at("gameType").get<std::string>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.platformId = j.at("platformId").get<std::string>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameCreation = j.at("gameCreation").get<uint64_t>();
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant_t>>();
    v.seasonId = j.at("seasonId").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryGame_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
