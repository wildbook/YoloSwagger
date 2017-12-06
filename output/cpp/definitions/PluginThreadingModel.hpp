#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PluginThreadingModel_t {
    concurrent_E = 3,
    dedicated_E = 1,
    parallel_E = 4,
    sequential_E = 2,
  };

  inline void to_json(nlohmann::json& j, const PluginThreadingModel_t& v) {
    switch(v) {
      case PluginThreadingModel_t::concurrent_E:
        j = "concurrent";
      break;
      case PluginThreadingModel_t::dedicated_E:
        j = "dedicated";
      break;
      case PluginThreadingModel_t::parallel_E:
        j = "parallel";
      break;
      case PluginThreadingModel_t::sequential_E:
        j = "sequential";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PluginThreadingModel_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "concurrent"){
      v = PluginThreadingModel_t::concurrent_E;
      return;
    }
    if(s == "dedicated"){
      v = PluginThreadingModel_t::dedicated_E;
      return;
    }
    if(s == "parallel"){
      v = PluginThreadingModel_t::parallel_E;
      return;
    }
    if(s == "sequential"){
      v = PluginThreadingModel_t::sequential_E;
      return;
    }
  }
}
