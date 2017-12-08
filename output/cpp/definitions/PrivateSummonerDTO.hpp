#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    std::string_t internalName;
    bool_t displayEloQuestionaire;
    std::string_t name;
    bool_t tutorialFlag;
    int32_t_t profileIconId;
    uint64_t_t sumId;
    uint64_t_t acctId;
    std::string_t previousSeasonHighestTier;
    bool_t nameChangeFlag;
    bool_t advancedTutorialFlag;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["internalName"] = v.internalName;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
    j["name"] = v.name;
    j["tutorialFlag"] = v.tutorialFlag;
    j["profileIconId"] = v.profileIconId;
    j["sumId"] = v.sumId;
    j["acctId"] = v.acctId;
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.internalName = j.at("internalName").get<std::string_t>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool_t>();
    v.profileIconId = j.at("profileIconId").get<int32_t_t>();
    v.sumId = j.at("sumId").get<uint64_t_t>();
    v.acctId = j.at("acctId").get<uint64_t_t>();
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string_t>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool_t>();
  }
  inline std::string to_string(const PrivateSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
