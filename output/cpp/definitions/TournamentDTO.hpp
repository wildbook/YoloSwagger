#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentPhaseDTO.hpp"
#include "ClashRewardConfigClient.hpp"
namespace leagueapi {
  struct TournamentDTO_t {
    int64_t scheduleEndTime;
    int32_t queueId;
    int64_t scoutingTimeMs;
    std::vector<TournamentPhaseDTO_t> phases;
    int32_t entryFee;
    int32_t rosterSize;
    std::vector<int32_t> buyInOptions;
    std::string nameLocKey;
    int64_t scheduleTime;
    int64_t id;
    int64_t rosterCreateDeadline;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
    int32_t maxSub;
    int64_t rosterDisbandDeadline;
    int32_t themeId;
  };

  inline void to_json(nlohmann::json& j, const TournamentDTO_t& v) {
    j["scheduleEndTime"] = v.scheduleEndTime;
    j["queueId"] = v.queueId;
    j["scoutingTimeMs"] = v.scoutingTimeMs;
    j["phases"] = v.phases;
    j["entryFee"] = v.entryFee;
    j["rosterSize"] = v.rosterSize;
    j["buyInOptions"] = v.buyInOptions;
    j["nameLocKey"] = v.nameLocKey;
    j["scheduleTime"] = v.scheduleTime;
    j["id"] = v.id;
    j["rosterCreateDeadline"] = v.rosterCreateDeadline;
    j["rewardConfig"] = v.rewardConfig;
    j["maxSub"] = v.maxSub;
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline;
    j["themeId"] = v.themeId;
  }

  inline void from_json(const nlohmann::json& j, TournamentDTO_t& v) {
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>();
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO_t>>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.scheduleTime = j.at("scheduleTime").get<int64_t>();
    v.id = j.at("id").get<int64_t>();
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
    v.maxSub = j.at("maxSub").get<int32_t>();
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>();
    v.themeId = j.at("themeId").get<int32_t>();
  }
}
