#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigClient.hpp"
#include "TournamentPhaseDTO.hpp"
namespace leagueapi {
  struct TournamentDTO_t {
    std::vector<int32_t> buyInOptions;
    int32_t entryFee;
    int64_t id;
    int32_t maxSub;
    std::string nameLocKey;
    std::vector<TournamentPhaseDTO_t> phases;
    int32_t queueId;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    int64_t rosterCreateDeadline;
    int64_t rosterDisbandDeadline;
    int32_t rosterSize;
    int64_t scheduleEndTime;
    int64_t scheduleTime;
    int64_t scoutingTimeMs;
    int32_t themeId;
  };

  inline void to_json(nlohmann::json& j, const TournamentDTO_t& v) {
    j["buyInOptions"] = v.buyInOptions;
    j["entryFee"] = v.entryFee;
    j["id"] = v.id;
    j["maxSub"] = v.maxSub;
    j["nameLocKey"] = v.nameLocKey;
    j["phases"] = v.phases;
    j["queueId"] = v.queueId;
    j["rewardConfig"] = v.rewardConfig;
    j["rosterCreateDeadline"] = v.rosterCreateDeadline;
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline;
    j["rosterSize"] = v.rosterSize;
    j["scheduleEndTime"] = v.scheduleEndTime;
    j["scheduleTime"] = v.scheduleTime;
    j["scoutingTimeMs"] = v.scoutingTimeMs;
    j["themeId"] = v.themeId;
  }

  inline void from_json(const nlohmann::json& j, TournamentDTO_t& v) {
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.maxSub = j.at("maxSub").get<int32_t>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO_t>>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>();
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>();
    v.scheduleTime = j.at("scheduleTime").get<int64_t>();
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>();
    v.themeId = j.at("themeId").get<int32_t>();
  }
}
