#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PrivateSummonerDTO_t {
    std::string previousSeasonHighestTier;
    bool nameChangeFlag;
    int32_t profileIconId;
    uint64_t acctId;
    bool advancedTutorialFlag;
    std::string name;
    bool displayEloQuestionaire;
    uint64_t sumId;
    bool tutorialFlag;
    std::string internalName;
  };

  inline void to_json(nlohmann::json& j, const PrivateSummonerDTO_t& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier;
    j["nameChangeFlag"] = v.nameChangeFlag;
    j["profileIconId"] = v.profileIconId;
    j["acctId"] = v.acctId;
    j["advancedTutorialFlag"] = v.advancedTutorialFlag;
    j["name"] = v.name;
    j["displayEloQuestionaire"] = v.displayEloQuestionaire;
    j["sumId"] = v.sumId;
    j["tutorialFlag"] = v.tutorialFlag;
    j["internalName"] = v.internalName;
  }

  inline void from_json(const nlohmann::json& j, PrivateSummonerDTO_t& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>();
    v.nameChangeFlag = j.at("nameChangeFlag").get<bool>();
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.acctId = j.at("acctId").get<uint64_t>();
    v.advancedTutorialFlag = j.at("advancedTutorialFlag").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.displayEloQuestionaire = j.at("displayEloQuestionaire").get<bool>();
    v.sumId = j.at("sumId").get<uint64_t>();
    v.tutorialFlag = j.at("tutorialFlag").get<bool>();
    v.internalName = j.at("internalName").get<std::string>();
  }
  inline std::string to_string(const PrivateSummonerDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
