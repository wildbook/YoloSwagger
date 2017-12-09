#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClashRewardSpec_t {
    std::string quantity;
    std::string tier;
    std::string seasonId;
    std::string name;
    std::string pedestal;
    std::string level;
    std::string theme;
    std::string bracket;
    std::string gem;
    std::string cup;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardSpec_t& v) {
    j["quantity"] = v.quantity;
    j["tier"] = v.tier;
    j["seasonId"] = v.seasonId;
    j["name"] = v.name;
    j["pedestal"] = v.pedestal;
    j["level"] = v.level;
    j["theme"] = v.theme;
    j["bracket"] = v.bracket;
    j["gem"] = v.gem;
    j["cup"] = v.cup;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardSpec_t& v) {
    v.quantity = j.at("quantity").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.seasonId = j.at("seasonId").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.pedestal = j.at("pedestal").get<std::string>();
    v.level = j.at("level").get<std::string>();
    v.theme = j.at("theme").get<std::string>();
    v.bracket = j.at("bracket").get<std::string>();
    v.gem = j.at("gem").get<std::string>();
    v.cup = j.at("cup").get<std::string>();
  }
  inline std::string to_string(const ClashRewardSpec_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
