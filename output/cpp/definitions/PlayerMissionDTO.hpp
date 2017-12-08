#pragma once
#include <json.hpp>
#include <optional>
#include "MissionAlertDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
#include "MissionRequirementDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
namespace leagueapi {
  struct PlayerMissionDTO_t {
    std::string internalName;
    bool isNew;
    std::string locale;
    int64_t lastUpdatedTimestamp;
    int64_t completedDate;
    std::string id;
    bool viewed;
    int64_t cooldownTimeMillis;
    std::string backgroundImageUrl;
    std::string title;
    std::vector<PlayerMissionObjectiveDTO_t> objectives;
    std::string seriesName;
    std::string displayType;
    std::string celebrationType;
    std::string status;
    std::string iconImageUrl;
    std::vector<PlayerMissionRewardDTO_t> rewards;
    std::string description;
    int64_t startTime;
    std::vector<MissionRequirementDTO_t> requirements;
    std::string missionType;
    std::string helperText;
    std::vector<MissionAlertDTO_t> expiringWarnings;
    int64_t endTime;
  };

  inline void to_json(nlohmann::json& j, const PlayerMissionDTO_t& v) {
    j["internalName"] = v.internalName;
    j["isNew"] = v.isNew;
    j["locale"] = v.locale;
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp;
    j["completedDate"] = v.completedDate;
    j["id"] = v.id;
    j["viewed"] = v.viewed;
    j["cooldownTimeMillis"] = v.cooldownTimeMillis;
    j["backgroundImageUrl"] = v.backgroundImageUrl;
    j["title"] = v.title;
    j["objectives"] = v.objectives;
    j["seriesName"] = v.seriesName;
    j["displayType"] = v.displayType;
    j["celebrationType"] = v.celebrationType;
    j["status"] = v.status;
    j["iconImageUrl"] = v.iconImageUrl;
    j["rewards"] = v.rewards;
    j["description"] = v.description;
    j["startTime"] = v.startTime;
    j["requirements"] = v.requirements;
    j["missionType"] = v.missionType;
    j["helperText"] = v.helperText;
    j["expiringWarnings"] = v.expiringWarnings;
    j["endTime"] = v.endTime;
  }

  inline void from_json(const nlohmann::json& j, PlayerMissionDTO_t& v) {
    v.internalName = j.at("internalName").get<std::string>();
    v.isNew = j.at("isNew").get<bool>();
    v.locale = j.at("locale").get<std::string>();
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>();
    v.completedDate = j.at("completedDate").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.viewed = j.at("viewed").get<bool>();
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t>();
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO_t>>();
    v.seriesName = j.at("seriesName").get<std::string>();
    v.displayType = j.at("displayType").get<std::string>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.status = j.at("status").get<std::string>();
    v.iconImageUrl = j.at("iconImageUrl").get<std::string>();
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO_t>>();
    v.description = j.at("description").get<std::string>();
    v.startTime = j.at("startTime").get<int64_t>();
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO_t>>();
    v.missionType = j.at("missionType").get<std::string>();
    v.helperText = j.at("helperText").get<std::string>();
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO_t>>();
    v.endTime = j.at("endTime").get<int64_t>();
  }
  inline std::string to_string(const PlayerMissionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
