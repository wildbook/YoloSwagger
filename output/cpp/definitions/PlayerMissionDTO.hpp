#pragma once
#include <json.hpp>
#include <optional>
#include "MissionAlertDTO.hpp"
#include "PlayerMissionObjectiveDTO.hpp"
#include "MissionRequirementDTO.hpp"
#include "PlayerMissionRewardDTO.hpp"
namespace leagueapi {
  struct PlayerMissionDTO_t {
    std::string_t internalName;
    bool_t isNew;
    std::string_t locale;
    int64_t_t lastUpdatedTimestamp;
    int64_t_t completedDate;
    std::string_t id;
    bool_t viewed;
    int64_t_t cooldownTimeMillis;
    std::string_t backgroundImageUrl;
    std::string_t title;
    std::vector<PlayerMissionObjectiveDTO_t> objectives;
    std::string_t seriesName;
    std::string_t displayType;
    std::string_t celebrationType;
    std::string_t status;
    std::string_t iconImageUrl;
    std::vector<PlayerMissionRewardDTO_t> rewards;
    std::string_t description;
    int64_t_t startTime;
    std::vector<MissionRequirementDTO_t> requirements;
    std::string_t missionType;
    std::string_t helperText;
    std::vector<MissionAlertDTO_t> expiringWarnings;
    int64_t_t endTime;
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
    v.internalName = j.at("internalName").get<std::string_t>();
    v.isNew = j.at("isNew").get<bool_t>();
    v.locale = j.at("locale").get<std::string_t>();
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t_t>();
    v.completedDate = j.at("completedDate").get<int64_t_t>();
    v.id = j.at("id").get<std::string_t>();
    v.viewed = j.at("viewed").get<bool_t>();
    v.cooldownTimeMillis = j.at("cooldownTimeMillis").get<int64_t_t>();
    v.backgroundImageUrl = j.at("backgroundImageUrl").get<std::string_t>();
    v.title = j.at("title").get<std::string_t>();
    v.objectives = j.at("objectives").get<std::vector<PlayerMissionObjectiveDTO_t>>();
    v.seriesName = j.at("seriesName").get<std::string_t>();
    v.displayType = j.at("displayType").get<std::string_t>();
    v.celebrationType = j.at("celebrationType").get<std::string_t>();
    v.status = j.at("status").get<std::string_t>();
    v.iconImageUrl = j.at("iconImageUrl").get<std::string_t>();
    v.rewards = j.at("rewards").get<std::vector<PlayerMissionRewardDTO_t>>();
    v.description = j.at("description").get<std::string_t>();
    v.startTime = j.at("startTime").get<int64_t_t>();
    v.requirements = j.at("requirements").get<std::vector<MissionRequirementDTO_t>>();
    v.missionType = j.at("missionType").get<std::string_t>();
    v.helperText = j.at("helperText").get<std::string_t>();
    v.expiringWarnings = j.at("expiringWarnings").get<std::vector<MissionAlertDTO_t>>();
    v.endTime = j.at("endTime").get<int64_t_t>();
  }
  inline std::string to_string(const PlayerMissionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
