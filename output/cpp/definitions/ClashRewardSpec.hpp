#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClashRewardSpec_t {
    std::string_t seasonId;
    std::string_t name;
    std::string_t level;
    std::string_t cup;
    std::string_t theme;
    std::string_t bracket;
    std::string_t tier;
    std::string_t pedestal;
    std::string_t gem;
    std::string_t quantity;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardSpec_t& v) {
    j["seasonId"] = v.seasonId;
    j["name"] = v.name;
    j["level"] = v.level;
    j["cup"] = v.cup;
    j["theme"] = v.theme;
    j["bracket"] = v.bracket;
    j["tier"] = v.tier;
    j["pedestal"] = v.pedestal;
    j["gem"] = v.gem;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardSpec_t& v) {
    v.seasonId = j.at("seasonId").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.level = j.at("level").get<std::string_t>();
    v.cup = j.at("cup").get<std::string_t>();
    v.theme = j.at("theme").get<std::string_t>();
    v.bracket = j.at("bracket").get<std::string_t>();
    v.tier = j.at("tier").get<std::string_t>();
    v.pedestal = j.at("pedestal").get<std::string_t>();
    v.gem = j.at("gem").get<std::string_t>();
    v.quantity = j.at("quantity").get<std::string_t>();
  }
  inline std::string to_string(const ClashRewardSpec_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
