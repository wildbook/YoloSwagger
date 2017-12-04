#ifndef SWAGGER_TYPES_SanitizerSanitizerConfig_HPP
#define SWAGGER_TYPES_SanitizerSanitizerConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SanitizerSanitizerConfig {
    // 
    std::string Level0Filter;
    // 
    std::string Level0Unfilter;
    // 
    std::string Level1Filter;
    // 
    std::string Level1Unfilter;
    // 
    std::string Level2Filter;
    // 
    std::string Level2Unfilter;
    // 
    std::string Level3Filter;
    // 
    std::string Level3Unfilter;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerConfig& v) {
    j["Level0Filter"] = v.Level0Filter;
    j["Level0Unfilter"] = v.Level0Unfilter;
    j["Level1Filter"] = v.Level1Filter;
    j["Level1Unfilter"] = v.Level1Unfilter;
    j["Level2Filter"] = v.Level2Filter;
    j["Level2Unfilter"] = v.Level2Unfilter;
    j["Level3Filter"] = v.Level3Filter;
    j["Level3Unfilter"] = v.Level3Unfilter;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerConfig& v) {
    v.Level0Filter = j.at("Level0Filter").get<std::string>;
    v.Level0Unfilter = j.at("Level0Unfilter").get<std::string>;
    v.Level1Filter = j.at("Level1Filter").get<std::string>;
    v.Level1Unfilter = j.at("Level1Unfilter").get<std::string>;
    v.Level2Filter = j.at("Level2Filter").get<std::string>;
    v.Level2Unfilter = j.at("Level2Unfilter").get<std::string>;
    v.Level3Filter = j.at("Level3Filter").get<std::string>;
    v.Level3Unfilter = j.at("Level3Unfilter").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SanitizerSanitizerConfig_HPP
