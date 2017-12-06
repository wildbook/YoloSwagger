#pragma once
#include <json.hpp>
#include <optional>
#include "PlayerMissionRewardDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
#include "MissionRequirementDTO.hpp"
#include "MissionAlertDTO.hpp"
namespace leagueapi {
  struct PlayerMissionDTO_t {
    std::string helperText;
    std::vector<MissionRequirementDTO_t> requirements;
    std::string description;
    std::string seriesName;
    std::string locale;
    std::string status;
    std::string id;
    std::string missionType;
    std::vector<MissionAlertDTO_t> expiringWarnings;
    std::string celebrationType;
    std::string backgroundImageUrl;
    std::string iconImageUrl;
    bool isNew;
    bool viewed;
    int64_t cooldownTimeMillis;
    int64_t lastUpdatedTimestamp;
    std::string displayType;
    int64_t endTime;
    std::string internalName;
    std::vector<PlayerMissionObjectiveDTO_t> objectives;
    std::string title;
    int64_t startTime;
    int64_t completedDate;
    std::vector<PlayerMissionRewardDTO_t> rewards;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionDTO_t& v) {
    j["helperText"] = v.helperText;
    j["requirements"] = v.requirements;
    j["description"] = v.description;
    j["seriesName"] = v.seriesName;
    j["locale"] = v.locale;
    j["status"] = v.status;
    j["id"] = v.id;
    j["missionType"] = v.missionType;
    j["expiringWarnings"] = v.expiringWarnings;
    j["celebrationType"] = v.celebrationType;
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["iconImageUrl"] = v.iconImageUrl;
    j["isNew"] = v.isNew;
    j["viewed"] = v.viewed;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["displayType"] = v.displayType;
    j["endTime"] = v.endTime;
    j["internalName"] = v.internalName;
    j["objectives"] = v.objectives;
    j["title"] = v.title;
    j["startTime"] = v.startTime;
    j["completedDate"] = v.completedDate;
    j["rewards"] = v.rewards;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionDTO_t& v) {
    v.helperText = j.at("helperText").get<std::string>();
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO_t>>();
    v.description = j.at("description").get<std::string>();
    v.seriesName = j.at("seriesName").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.status = j.at("status").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.missionType = j.at("missionType").get<std::string>();
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO_t>>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>();
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>();
    v.isNew = j.at("isNew").get<bool>();
    v.viewed = j.at("viewed").get<bool>();
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>();
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>();
    v.displayType = j.at("displayType").get<std::string>();
    v.endTime = j.at("endTime").get<int64_t>();
    v.internalName = j.at("internalName").get<std::string>();
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO_t>>();
    v.title = j.at("title").get<std::string>();
    v.startTime = j.at("startTime").get<int64_t>();
    v.completedDate = j.at("completedDate").get<int64_t>();
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO_t>>();
  }
}
