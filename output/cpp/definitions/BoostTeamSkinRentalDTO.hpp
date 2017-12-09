#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BoostTeamSkinRentalDTO_t {
    int64_t ipRewardForPurchaser;
    bool unlocked;
    int64_t price;
    int64_t ipReward;
    std::vector<int64_t> availableSkins;
    std::string summonerName;
    std::string skinUnlockMode;
  };

  inline void to_json(nlohmann::json& j, const BoostTeamSkinRentalDTO_t& v) {
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["unlocked"] = v.unlocked;
    j["price"] = v.price;
    j["ipReward"] = v.ipReward;
    j["availableSkins"] = v.availableSkins;
    j["summonerName"] = v.summonerName;
    j["skinUnlockMode"] = v.skinUnlockMode;
  }

  inline void from_json(const nlohmann::json& j, BoostTeamSkinRentalDTO_t& v) {
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>();
    v.unlocked = j.at("unlocked").get<bool>();
    v.price = j.at("price").get<int64_t>();
    v.ipReward = j.at("ipReward").get<int64_t>();
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>();
  }
  inline std::string to_string(const BoostTeamSkinRentalDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
