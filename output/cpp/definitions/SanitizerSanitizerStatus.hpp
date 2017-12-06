#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerStatus_t {
    uint32_t allowedCharsCount;
    uint32_t breakingCharsCount;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    std::string locale;
    uint32_t projectedCharsCount;
    bool ready;
    std::string region;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus_t& v) {
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["breakingCharsCount"] = v.breakingCharsCount;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
    j["locale"] = v.locale;
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["ready"] = v.ready;
    j["region"] = v.region;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus_t& v) {
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>();
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>();
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>();
    v.locale = j.at("locale").get<std::string>();
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>();
    v.ready = j.at("ready").get<bool>();
    v.region = j.at("region").get<std::string>();
  }
}
