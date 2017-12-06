#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderLinkResource_t {
    bool linked;
    std::string name;
    std::string reason;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLinkResource_t& v) {
    j["linked"] = v.linked;
    j["name"] = v.name;
    j["reason"] = v.reason;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLinkResource_t& v) {
    v.linked = j.at("linked").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.reason = j.at("reason").get<std::string>();
  }
}
