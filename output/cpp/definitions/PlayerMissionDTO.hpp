#pragma once
#include <json.hpp>
#include <optional>
#include "MissionAlertDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
#include "MissionRequirementDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
namespace leagueapi {
  struct PlayerMissionDTO_t {
    bool viewed;
    std::string description;
    int64_t lastUpdatedTimestamp;
    bool isNew;
    std::string internalName;
    int64_t cooldownTimeMillis;
    int64_t startTime;
    std::string backgroundImageUrl;
    std::vector<MissionRequirementDTO_t> requirements;
    std::string status;
    std::vector<PlayerMissionRewardDTO_t> rewards;
    std::string locale;
    std::string iconImageUrl;
    int64_t endTime;
    std::string helperText;
    std::string missionType;
    std::string seriesName;
    std::string title;
    std::string celebrationType;
    std::string id;
    std::string displayType;
    std::vector<PlayerMissionObjectiveDTO_t> objectives;
    int64_t completedDate;
    std::vector<MissionAlertDTO_t> expiringWarnings;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionDTO_t& v) {
    j["viewed"] = v.viewed;
    j["description"] = v.description;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["isNew"] = v.isNew;
    j["internalName"] = v.internalName;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["startTime"] = v.startTime;
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["requirements"] = v.requirements;
    j["status"] = v.status;
    j["rewards"] = v.rewards;
    j["locale"] = v.locale;
    j["iconImageUrl"] = v.iconImageUrl;
    j["endTime"] = v.endTime;
    j["helperText"] = v.helperText;
    j["missionType"] = v.missionType;
    j["seriesName"] = v.seriesName;
    j["title"] = v.title;
    j["celebrationType"] = v.celebrationType;
    j["id"] = v.id;
    j["displayType"] = v.displayType;
    j["objectives"] = v.objectives;
    j["completedDate"] = v.completedDate;
    j["expiringWarnings"] = v.expiringWarnings;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionDTO_t& v) {
    v.viewed = j.at("viewed").get<bool>();
    v.description = j.at("description").get<std::string>();
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>();
    v.isNew = j.at("isNew").get<bool>();
    v.internalName = j.at("internalName").get<std::string>();
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>();
    v.startTime = j.at("startTime").get<int64_t>();
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>();
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO_t>>();
    v.status = j.at("status").get<std::string>();
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO_t>>();
    v.locale = j.at("locale").get<std::string>();
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>();
    v.endTime = j.at("endTime").get<int64_t>();
    v.helperText = j.at("helperText").get<std::string>();
    v.missionType = j.at("missionType").get<std::string>();
    v.seriesName = j.at("seriesName").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.displayType = j.at("displayType").get<std::string>();
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO_t>>();
    v.completedDate = j.at("completedDate").get<int64_t>();
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO_t>>();
  }
  inline std::string to_string(const PlayerMissionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
