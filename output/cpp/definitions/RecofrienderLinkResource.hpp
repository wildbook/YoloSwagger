#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderLinkResource_t {
    bool linked;
    std::string reason;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLinkResource_t& v) {
    j["linked"] = v.linked;
    j["reason"] = v.reason;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLinkResource_t& v) {
    v.linked = j.at("linked").get<bool>();
    v.reason = j.at("reason").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const RecofrienderLinkResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
