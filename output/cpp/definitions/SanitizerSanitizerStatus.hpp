#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerStatus_t {
    uint32_t breakingCharsCount;
    std::string locale;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    std::string region;
    uint32_t allowedCharsCount;
    bool ready;
    uint32_t projectedCharsCount;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus_t& v) {
    j["breakingCharsCount"] = v.breakingCharsCount;
    j["locale"] = v.locale;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
    j["region"] = v.region;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["ready"] = v.ready;
    j["projectedCharsCount"] = v.projectedCharsCount;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus_t& v) {
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>();
    v.locale = j.at("locale").get<std::string>();
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>();
    v.region = j.at("region").get<std::string>();
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>();
    v.ready = j.at("ready").get<bool>();
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>();
  }
}
