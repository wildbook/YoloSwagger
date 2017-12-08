#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentResource.hpp"
namespace leagueapi {
  struct PatcherProductResource_t {
    std::optional<uint32_t_t> refresh_period;
    std::string_t id;
    std::vector<PatcherComponentResource_t> components;
  };

  inline void to_json(nlohmann::json& j, const PatcherProductResource_t& v) {
    if(v.refresh_period)
      j["refresh_period"] = *v.refresh_period;
    j["id"] = v.id;
    j["components"] = v.components;
  }

  inline void from_json(const nlohmann::json& j, PatcherProductResource_t& v) {
    if(auto it = j.find("refresh_period"); it != j.end() && !it->is_null())
      v.refresh_period = it->get<uint32_t_t>();
    v.id = j.at("id").get<std::string_t>();
    v.components = j.at("components").get<std::vector<PatcherComponentResource_t>>();
  }
  inline std::string to_string(const PatcherProductResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
