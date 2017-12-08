#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBoost_t {
    int64_t ipRewardForPurchaser;
    std::string summonerName;
    std::vector<int64_t> availableSkins;
    int64_t price;
    bool unlocked;
    int64_t ipReward;
    std::string skinUnlockMode;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBoost_t& v) {
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["summonerName"] = v.summonerName;
    j["availableSkins"] = v.availableSkins;
    j["price"] = v.price;
    j["unlocked"] = v.unlocked;
    j["ipReward"] = v.ipReward;
    j["skinUnlockMode"] = v.skinUnlockMode;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBoost_t& v) {
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>();
    v.price = j.at("price").get<int64_t>();
    v.unlocked = j.at("unlocked").get<bool>();
    v.ipReward = j.at("ipReward").get<int64_t>();
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTeamBoost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
