#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksGameCustomizationDTO_t {
    std::string content;
    std::string category;
    uint64_t queueType;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameCustomizationDTO_t& v) {
    j["content"] = v.content;
    j["category"] = v.category;
    j["queueType"] = v.queueType;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameCustomizationDTO_t& v) {
    v.content = j.at("content").get<std::string>();
    v.category = j.at("category").get<std::string>();
    v.queueType = j.at("queueType").get<uint64_t>();
  }
}
