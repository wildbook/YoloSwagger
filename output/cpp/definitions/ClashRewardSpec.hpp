#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClashRewardSpec_t {
    std::string seasonId;
    std::string tier;
    std::string quantity;
    std::string cup;
    std::string gem;
    std::string theme;
    std::string name;
    std::string bracket;
    std::string level;
    std::string pedestal;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardSpec_t& v) {
    j["seasonId"] = v.seasonId;
    j["tier"] = v.tier;
    j["quantity"] = v.quantity;
    j["cup"] = v.cup;
    j["gem"] = v.gem;
    j["theme"] = v.theme;
    j["name"] = v.name;
    j["bracket"] = v.bracket;
    j["level"] = v.level;
    j["pedestal"] = v.pedestal;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardSpec_t& v) {
    v.seasonId = j.at("seasonId").get<std::string>();
    v.tier = j.at("tier").get<std::string>();
    v.quantity = j.at("quantity").get<std::string>();
    v.cup = j.at("cup").get<std::string>();
    v.gem = j.at("gem").get<std::string>();
    v.theme = j.at("theme").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.bracket = j.at("bracket").get<std::string>();
    v.level = j.at("level").get<std::string>();
    v.pedestal = j.at("pedestal").get<std::string>();
  }
}
