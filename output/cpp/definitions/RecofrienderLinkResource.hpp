#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderLinkResource_t {
    std::string reason;
    std::string name;
    bool linked;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLinkResource_t& v) {
    j["reason"] = v.reason;
    j["name"] = v.name;
    j["linked"] = v.linked;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLinkResource_t& v) {
    v.reason = j.at("reason").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.linked = j.at("linked").get<bool>();
  }
  inline std::string to_string(const RecofrienderLinkResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
