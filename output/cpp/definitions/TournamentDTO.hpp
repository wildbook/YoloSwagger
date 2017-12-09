#pragma once
#include <json.hpp>
#include <optional>
#include "TournamentPhaseDTO.hpp"
#include "ClashRewardConfigClient.hpp"
namespace leagueapi {
  struct TournamentDTO_t {
    int64_t scheduleTime;
    std::vector<TournamentPhaseDTO_t> phases;
    int32_t maxSub;
    int32_t rosterSize;
    int64_t scoutingTimeMs;
    int32_t entryFee;
    std::vector<int32_t> buyInOptions;
    std::string nameLocKey;
    int64_t rosterDisbandDeadline;
    int32_t themeId;
    int64_t id;
    int64_t scheduleEndTime;
    int64_t rosterCreateDeadline;
    int32_t queueId;
    std::vector<ClashRewardConfigClient_t> rewardConfig;
  };

  inline void to_json(nlohmann::json& j, const TournamentDTO_t& v) {
    j["scheduleTime"] = v.scheduleTime;
    j["phases"] = v.phases;
    j["maxSub"] = v.maxSub;
    j["rosterSize"] = v.rosterSize;
    j["scoutingTimeMs"] = v.scoutingTimeMs;
    j["entryFee"] = v.entryFee;
    j["buyInOptions"] = v.buyInOptions;
    j["nameLocKey"] = v.nameLocKey;
    j["rosterDisbandDeadline"] = v.rosterDisbandDeadline;
    j["themeId"] = v.themeId;
    j["id"] = v.id;
    j["scheduleEndTime"] = v.scheduleEndTime;
    j["rosterCreateDeadline"] = v.rosterCreateDeadline;
    j["queueId"] = v.queueId;
    j["rewardConfig"] = v.rewardConfig;
  }

  inline void from_json(const nlohmann::json& j, TournamentDTO_t& v) {
    v.scheduleTime = j.at("scheduleTime").get<int64_t>();
    v.phases = j.at("phases").get<std::vector<TournamentPhaseDTO_t>>();
    v.maxSub = j.at("maxSub").get<int32_t>();
    v.rosterSize = j.at("rosterSize").get<int32_t>();
    v.scoutingTimeMs = j.at("scoutingTimeMs").get<int64_t>();
    v.entryFee = j.at("entryFee").get<int32_t>();
    v.buyInOptions = j.at("buyInOptions").get<std::vector<int32_t>>();
    v.nameLocKey = j.at("nameLocKey").get<std::string>();
    v.rosterDisbandDeadline = j.at("rosterDisbandDeadline").get<int64_t>();
    v.themeId = j.at("themeId").get<int32_t>();
    v.id = j.at("id").get<int64_t>();
    v.scheduleEndTime = j.at("scheduleEndTime").get<int64_t>();
    v.rosterCreateDeadline = j.at("rosterCreateDeadline").get<int64_t>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.rewardConfig = j.at("rewardConfig").get<std::vector<ClashRewardConfigClient_t>>();
  }
  inline std::string to_string(const TournamentDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
