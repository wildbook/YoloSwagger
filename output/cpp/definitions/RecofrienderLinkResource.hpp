#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderLinkResource_t {
    std::string_t reason;
    bool_t linked;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLinkResource_t& v) {
    j["reason"] = v.reason;
    j["linked"] = v.linked;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLinkResource_t& v) {
    v.reason = j.at("reason").get<std::string_t>();
    v.linked = j.at("linked").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const RecofrienderLinkResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
